/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCache;

@interface _PASLPDictionaryContext : NSObject {

	const unsigned* _storage;
	unsigned long long _count;
	NSCache* _enumerationCache;

}

@property (readonly) const unsigned* storage;               //@synthesize storage=_storage - In the implementation block
@property (readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (__weak) NSCache * enumerationCache;              //@synthesize enumerationCache=_enumerationCache - In the implementation block
-(id)init;
-(unsigned long long)count;
-(const unsigned*)storage;
-(NSCache *)enumerationCache;
-(id)initWithStorage:(const unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setEnumerationCache:(NSCache *)arg1 ;
@end

