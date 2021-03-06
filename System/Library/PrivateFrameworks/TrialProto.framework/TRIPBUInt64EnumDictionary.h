/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TrialProto-Structs.h>
#import <libobjc.A.dylib/TRIPBDictionaryInternalsProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TRIPBMessage, NSMutableDictionary;

@interface TRIPBUInt64EnumDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {

	TRIPBMessage* _autocreator;
	NSMutableDictionary* _dictionary;
	/*function pointer*/void* _validationFunc;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) /*function pointer*/void* validationFunc;              //@synthesize validationFunc=_validationFunc - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)initWithDictionary:(id)arg1 ;
-(void)removeAll;
-(id)serializedDataForUnknownValue:(int)arg1 forKey:(/*function pointer*/void**)arg2 keyDataType:(unsigned char)arg3 ;
-(id)initWithValidationFunction:(/*function pointer*/void*)arg1 rawValues:(const int*)arg2 forKeys:(const unsigned long long*)arg3 count:(unsigned long long)arg4 ;
-(/*function pointer*/void*)validationFunc;
-(void)enumerateKeysAndRawValuesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithValidationFunction:(/*function pointer*/void*)arg1 capacity:(unsigned long long)arg2 ;
-(BOOL)getEnum:(int*)arg1 forKey:(unsigned long long)arg2 ;
-(BOOL)getRawValue:(int*)arg1 forKey:(unsigned long long)arg2 ;
-(void)enumerateKeysAndEnumsUsingBlock:(/*^block*/id)arg1 ;
-(void)setRawValue:(int)arg1 forKey:(unsigned long long)arg2 ;
-(void)removeEnumForKey:(unsigned long long)arg1 ;
-(void)setEnum:(int)arg1 forKey:(unsigned long long)arg2 ;
-(void)enumerateForTextFormat:(/*^block*/id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2 ;
-(void)addRawEntriesFromDictionary:(id)arg1 ;
-(unsigned long long)computeSerializedSizeAsField:(id)arg1 ;
-(id)initWithValidationFunction:(/*function pointer*/void*)arg1 ;
-(void)setTRIPBGenericValue:(/*function pointer*/void**)arg1 forTRIPBGenericValueKey:(/*function pointer*/void**)arg2 ;
@end

