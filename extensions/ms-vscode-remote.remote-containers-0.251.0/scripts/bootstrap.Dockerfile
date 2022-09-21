FROM mcr.microsoft.com/vscode/devcontainers/base:0-alpine-3.14

RUN apk add --no-cache \
	nodejs \
	npm \
	make \
	g++ \
	docker-cli \
	docker-compose \
	;

RUN cd && npm i node-pty

COPY .vscode-remote-containers /root/.vscode-remote-containers
