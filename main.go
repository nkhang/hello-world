package main

import (
	"log"

	"github.com/gin-gonic/gin"
)

func main() {
	r := gin.Default()
	r.LoadHTMLGlob("views/*")
	r.GET("/", func(c *gin.Context) {
		// c.String(200, "Hello World")
		name := c.Query("name")
		c.HTML(200, "index.tmpl", map[string]interface{}{
			"name": name,
		})
	})
	r.Run()
	log.Println("Hello World")
}
