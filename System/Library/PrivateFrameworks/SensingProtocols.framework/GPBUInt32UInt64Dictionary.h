/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SensingProtocols.framework/SensingProtocols
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SensingProtocols/SensingProtocols-Structs.h>
#import <libobjc.A.dylib/GPBDictionaryInternalsProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage, NSMutableDictionary;

@interface GPBUInt32UInt64Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {

	GPBMessage* _autocreator;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) unsigned long long count; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)getUInt64:(unsigned long long*)arg1 forKey:(unsigned)arg2 ;
-(void)setUInt64:(unsigned long long)arg1 forKey:(unsigned)arg2 ;
-(void)removeAll;
-(void)setGPBGenericValue:(/*function pointer*/void**)arg1 forGPBGenericValueKey:(/*function pointer*/void**)arg2 ;
-(id)initWithUInt64s:(const unsigned long long*)arg1 forKeys:(const unsigned*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateKeysAndUInt64sUsingBlock:(/*^block*/id)arg1 ;
-(void)removeUInt64ForKey:(unsigned)arg1 ;
-(void)enumerateForTextFormat:(/*^block*/id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2 ;
-(unsigned long long)computeSerializedSizeAsField:(id)arg1 ;
@end

