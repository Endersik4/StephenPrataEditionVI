#pragma once
#ifndef TV_H_
#define TV_H_

class Tv {
public:
	friend class Remote;
	enum {Off, On};
	enum { MinVal, MaxVal = 20};
	enum {Antenna, Cable};
	enum {TV, DVD};

	Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}
	void onoff() { state = (state == On) ? Off : On; }
	bool ison() const { return state == On; }
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
	void set_input() { input = (input == TV) ? DVD : TV; }
	void settings() const;

	void zmien_tryb(Remote& r);
private:
	int state;
	int volume;
	int maxchannel;
	int channel;
	int mode;
	int input;
};


class Remote {
private:
	int mode;
	enum {normal, inter};
	int tryb;
public:
	friend class Tv;
	Remote(int m = Tv::TV, int t = normal) : mode(m), tryb(t) {}
	bool volup(Tv& t) { return t.volup(); }
	bool voldown(Tv& t) { return t.voldown(); }
	void onoff(Tv& t) { t.onoff(); }
	void chanup(Tv& t) { t.chanup(); }
	void chandown(Tv& t) { t.chandown(); }
	void set_chan(Tv& t, int c) { t.channel = c; }
	void set_mode(Tv& t) { t.set_mode(); }
	void set_input(Tv& t) { t.set_input(); }
	bool czy_normal(Tv& t) { if (tryb == normal) return true; else false; }
	void ustaw_tryb();
	void pokaz_tryb() const;
	
};
#endif