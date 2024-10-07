CXX = g++

CXXFLAGS = -std=c++17 -Iinclude -Wall

SRCDIR = src
INCDIR = include
BUILDDIR = build
TARGET = CppOppFirstProject

SRCS = $(wildcard $(SRCDIR)/*.cc)

OBJS = $(patsubst $(SRCDIR)/%.cc, $(BUILDDIR)/%.o, $(SRCS))

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

$(BUILDDIR)/%.o: $(SRCDIR)/%.cc | $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILDDIR):
	mkdir $(BUILDDIR)

clean:
	rm -rf $(BUILDDIR) $(TARGET)

PHONY: clean
