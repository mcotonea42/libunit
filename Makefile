FRAMEWORK_DIR = framework 
TESTS_DIR = tests 
REAL_TESTS_DIR = real-tests 
LIBFT_DIR = libft
FT_PRINTF_DIR=ft_printf

all:
	make -C $(FRAMEWORK_DIR)

test:
	@echo "\n--- 🧪 TESTING FRAMEWORK (Validation) ---"
	@make -C $(TESTS_DIR) test

real-test:
	@echo "\n--- 🚀 REAL TESTS (Libft) ---"
	@make -C $(REAL_TESTS_DIR) test

check: test real-test

clean:
	@make -C $(FRAMEWORK_DIR) clean
	@make -C $(TESTS_DIR) clean
	@make -C $(REAL_TESTS_DIR) clean
	@make -C $(LIBFT_DIR) clean
	@make -C $(FT_PRINTF_DIR) clean
	@echo "All objects cleaned."

fclean: clean
	@make -C $(FRAMEWORK_DIR) fclean
	@make -C $(TESTS_DIR) fclean
	@make -C $(REAL_TESTS_DIR) fclean
	@make -C $(LIBFT_DIR) fclean
	@make -C $(FT_PRINTF_DIR) fclean
	@echo "All binaries and libraries cleaned."

re: fclean all

.PHONY: all test real-test check clean fclean re