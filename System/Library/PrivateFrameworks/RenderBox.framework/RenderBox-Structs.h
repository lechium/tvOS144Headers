/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSObject<OS_dispatch_queue>, NSXMLParser, NSURL, RBDisplayList, RBShape, RBFill, NSError, RBDevice, <MTLDevice>;

typedef struct RBShapeData {
	int type;
	unsigned char data[144];
} RBShapeData;

typedef struct InlineHeap<256> {
	unsigned long long _page_size;
	Page _pages;
	char* _sbrk;
	char* _sbrk_end;
	unsigned char _buffer[256];
} InlineHeap<256>;

typedef struct CGPath* CGPathRef;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_RB3;

typedef struct CGFont* CGFontRef;

typedef struct refcounted_ptr<RB::Device> {
	Device _p;
} refcounted_ptr<RB::Device>;

typedef struct objc_ptr<NSObject<OS_dispatch_queue> *> {
	NSObject<OS_dispatch_queue>* _p;
} objc_ptr<NSObject<OS_dispatch_queue> *>;

typedef struct _cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > {
	AI __a_value;
} cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >;

typedef struct atomic<unsigned int> {
	cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > __a_;
} atomic<unsigned int>;

typedef struct CGImage* CGImageRef;

typedef struct _NSZone* NSZoneRef;

typedef struct _compressed_pair<RBStrokeElement *, std::__1::allocator<RBStrokeElement> > {
	unsigned char __value_;
} compressed_pair<RBStrokeElement *, std::__1::allocator<RBStrokeElement> >;

typedef struct vector<RBStrokeElement, std::__1::allocator<RBStrokeElement> > {
	unsigned char __begin_;
	unsigned char __end_;
	compressed_pair<RBStrokeElement *, std::__1::allocator<RBStrokeElement> > __end_cap_;
} vector<RBStrokeElement, std::__1::allocator<RBStrokeElement> >;

typedef struct _compressed_pair<float *, std::__1::allocator<float> > {
	float __value_;
} compressed_pair<float *, std::__1::allocator<float> >;

typedef struct vector<float, std::__1::allocator<float> > {
	float __begin_;
	float __end_;
	compressed_pair<float *, std::__1::allocator<float> > __end_cap_;
} vector<float, std::__1::allocator<float> >;

typedef struct cf_ptr<CGImage *> {
	CGImage _p;
} cf_ptr<CGImage *>;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct Pool<RB::DisplayList::State> {
	Item _freelist;
} Pool<RB::DisplayList::State>;

typedef struct Pool<RB::DisplayList::Layer> {
	Item _freelist;
} Pool<RB::DisplayList::Layer>;

typedef struct Heap {
	unsigned long long _page_size;
	Page _pages;
	char* _sbrk;
	char* _sbrk_end;
} Heap;

typedef struct DisplayList {
	Heap _heap;
	Layer _layer;
	State _state;
	Pool<RB::DisplayList::State> _state_pool;
	Pool<RB::DisplayList::Layer> _layer_pool;
	Clip _all_clips;
	Style _all_styles;
	BOOL _empty;
	unsigned char _required_depth;
} DisplayList;

typedef struct vector<std::__1::pair<RB::cf_ptr<CGContext *>, RB::ContextDelegate *>, 1, unsigned long> {
	unsigned char _p[16];
	pair<RB::cf_ptr<CGContext *>, RB::ContextDelegate *> _p;
	unsigned long long _size;
	unsigned long long _capacity;
} vector<std::__1::pair<RB::cf_ptr<CGContext *>, RB::ContextDelegate *>, 1, unsigned long>;

typedef struct CGContext* CGContextRef;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
} SCD_Struct_RB25;

typedef struct _compressed_pair<RB::Drawable *, std::__1::default_delete<RB::Drawable> > {
	Drawable __value_;
} compressed_pair<RB::Drawable *, std::__1::default_delete<RB::Drawable> >;

typedef struct unique_ptr<RB::Drawable, std::__1::default_delete<RB::Drawable> > {
	compressed_pair<RB::Drawable *, std::__1::default_delete<RB::Drawable> > __ptr_;
} unique_ptr<RB::Drawable, std::__1::default_delete<RB::Drawable> >;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct spin_lock {
	os_unfair_lock_s _lock;
} spin_lock;

typedef struct objc_ptr<void ()(id<RBDrawableStatistics>)> {
	/*^block*/id _p;
} objc_ptr<void ()(id<RBDrawableStatistics>)>;

typedef struct {
	float red;
	float green;
	float blue;
	float alpha;
} SCD_Struct_RB31;

typedef struct RBFillData {
	int type;
	unsigned char data[144];
} RBFillData;

typedef struct InlineHeap<64> {
	unsigned long long _page_size;
	Page _pages;
	char* _sbrk;
	char* _sbrk_end;
	unsigned char _buffer[64];
} InlineHeap<64>;

typedef struct {
	int field1;
	void field2;
} SCD_Struct_RB34;

typedef struct objc_ptr<NSXMLParser *> {
	NSXMLParser* _p;
} objc_ptr<NSXMLParser *>;

typedef struct objc_ptr<NSURL *> {
	NSURL* _p;
} objc_ptr<NSURL *>;

typedef struct objc_ptr<RBDisplayList *> {
	RBDisplayList* _p;
} objc_ptr<RBDisplayList *>;

typedef struct objc_ptr<RBShape *> {
	RBShape* _p;
} objc_ptr<RBShape *>;

typedef struct objc_ptr<RBFill *> {
	RBFill* _p;
} objc_ptr<RBFill *>;

typedef struct objc_ptr<NSError *> {
	NSError* _p;
} objc_ptr<NSError *>;

typedef struct _long {
	char* __data_;
	unsigned long long __size_;
	unsigned long long __cap_;
} long;

typedef struct _raw {
	unsigned long long __words[3];
} raw;

typedef struct _short {
	char __data_[23];
	compressed_pair<RBStrokeElement *, std::__1::allocator<RBStrokeElement> > ;
} short;

typedef struct _rep {
	/*function pointer*/void* ;
	long __l;
	short __s;
	const aw) __r;
} rep;

typedef struct _compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > {
	const ep __value_;
} compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >;

typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {
	compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > __r_;
} basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >;

typedef struct cf_ptr<__CFDictionary *> {
	__CFDictionary _p;
} cf_ptr<__CFDictionary *>;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<RB::XMLRecorder::Element *> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<RB::XMLRecorder::Element *> >;

typedef struct refcounted_ptr<RB::XMLRecorder::Element> {
	Element _p;
} refcounted_ptr<RB::XMLRecorder::Element>;

typedef struct _compressed_pair<RB::XMLRecorder::Element ***, std::__1::allocator<RB::XMLRecorder::Element **> > {
	Element __value_;
} compressed_pair<RB::XMLRecorder::Element ***, std::__1::allocator<RB::XMLRecorder::Element **> >;

typedef struct _split_buffer<RB::XMLRecorder::Element **, std::__1::allocator<RB::XMLRecorder::Element **> > {
	Element __first_;
	Element __begin_;
	Element __end_;
	compressed_pair<RB::XMLRecorder::Element ***, std::__1::allocator<RB::XMLRecorder::Element **> > __end_cap_;
} split_buffer<RB::XMLRecorder::Element **, std::__1::allocator<RB::XMLRecorder::Element **> >;

typedef struct deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *> > {
	split_buffer<RB::XMLRecorder::Element **, std::__1::allocator<RB::XMLRecorder::Element **> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<RB::XMLRecorder::Element *> > __size_;
} deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *> >;

typedef struct stack<RB::XMLRecorder::Element *, std::__1::deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *> > > {
	deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *> > c;
} stack<RB::XMLRecorder::Element *, std::__1::deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *> > >;

typedef struct Tree {
	const efcounted_ptr<RB::XMLRecorder::Element> _root;
	stack<RB::XMLRecorder::Element *, std::__1::deque<RB::XMLRecorder::Element *, std::__1::allocator<RB::XMLRecorder::Element *> > > _stack;
} Tree;

typedef struct _compressed_pair<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > *, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > > > {
	pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > __value_;
} compressed_pair<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > *, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > > >;

typedef struct vector<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> >, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > > > {
	pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > __begin_;
	pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > __end_;
	compressed_pair<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > *, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > > > __end_cap_;
} vector<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> >, std::__1::allocator<std::__1::pair<const char *, RB::refcounted_ptr<RB::XMLRecorder::AttrValue> > > >;

typedef struct objc_ptr<RBDevice *> {
	RBDevice* _p;
} objc_ptr<RBDevice *>;

typedef struct refcounted_ptr<(anonymous namespace)::ImageQueue> {
	ImageQueue _p;
} refcounted_ptr<(anonymous namespace)::ImageQueue>;

typedef struct _cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > {
	AB __a_value;
} cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> >;

typedef struct atomic<bool> {
	cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > __a_;
} atomic<bool>;

typedef struct objc_ptr<id<MTLDevice> > {
	<MTLDevice>* _p;
} objc_ptr<id<MTLDevice> >;

typedef struct refcounted_ptr<RB::Texture> {
	Texture _p;
} refcounted_ptr<RB::Texture>;

typedef struct Bounds {
	int x;
	int y;
	int w;
	int h;
} Bounds;

typedef struct {
	unsigned long long x;
	unsigned long long y;
	unsigned long long width;
	unsigned long long height;
} SCD_Struct_RB64;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

