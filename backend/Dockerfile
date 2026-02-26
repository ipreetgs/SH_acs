FROM node:20-alpine\nWORKDIR /usr/src/app\n\nCOPY package*.json ./\nRUN npm install\nCOPY . .\n\nRUN npx prisma generate\nRUN npm run build\n\nEXPOSE 3000\nCMD ["node", "dist/main.js"]\n
