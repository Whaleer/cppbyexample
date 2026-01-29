#!/usr/bin/env bash
set -e

echo "🔨 Building..."
tools/build

echo "🔧 Building server..."
go build -o tools/serve tools/serve.go

echo "🚀 Starting server..."
tools/serve &
SERVE_PID=$!

echo "⏳ Waiting for server to start..."
sleep 2

echo "🌐 Opening browser..."
open http://127.0.0.1:8000

echo "✅ Server running at http://127.0.0.1:8000"
echo "Press Ctrl+C to stop (you may need to manually kill the server process)"

wait $SERVE_PID
