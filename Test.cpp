#include "Test.h"
#include "Repo.h"
#include <assert.h>
void Test::testAll()
{
	this->testAdd();
	this->testRemove();
	this->testUpdate();
}

void Test::testRemove()
{
	vector<User> ru;
	vector<Issue> ri;
	Repo r{ ru, ri };
	Issue u("a", "a", "a", "a");
	Issue a("a", "a", "a", "a");
	r.addIssue(u);
	r.addIssue(a);
	assert(r.getRi().size() == 1);
	r.removeIssue(1);
	assert(r.getRi().size() == 1);
	r.removeIssue(3);
	assert(r.getRi().size() == 1);
}

void Test::testAdd()
{
	vector<User> ru;
	vector<Issue> ri;
	Repo r{ ru, ri };
	Issue u("a", "a", "a", "a");
	r.addIssue(u);
	assert(r.getRi().size() == 1);
}

void Test::testUpdate()
{
	vector<User> ru;
	vector<Issue> ri;
	Repo r{ ru, ri };
	Issue u("a", "a", "a", "a");
	r.addIssue(u);
	r.updateIssue(0, "a", "a");
	assert(r.getRi()[0].getDescription() == "a");
	r.updateIssue(3, "da", "we");
	assert(r.getRi()[0].getDescription() == "a");

	r.updateIssue(1, "da", "we");
	assert(r.getRi()[0].getDescription() == "a");



}