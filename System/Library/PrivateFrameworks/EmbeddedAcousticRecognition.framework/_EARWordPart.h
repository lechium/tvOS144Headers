/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:33 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSSet;

@interface _EARWordPart : NSObject {

	NSString* _tagName;
	NSString* _orthography;
	long long _tag;
	unsigned long long _frequency;
	NSSet* _pronunciations;

}

@property (nonatomic,readonly) NSString * orthography;                    //@synthesize orthography=_orthography - In the implementation block
@property (nonatomic,readonly) long long tag;                             //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) NSString * tagName; 
@property (nonatomic,readonly) unsigned long long frequency;              //@synthesize frequency=_frequency - In the implementation block
@property (nonatomic,readonly) NSSet * pronunciations;                    //@synthesize pronunciations=_pronunciations - In the implementation block
-(NSString *)orthography;
-(long long)tag;
-(unsigned long long)frequency;
-(NSString *)tagName;
-(NSSet *)pronunciations;
-(id)initWithOrthography:(id)arg1 pronunciations:(id)arg2 tag:(long long)arg3 ;
-(id)initWithOrthography:(id)arg1 pronunciations:(id)arg2 tagName:(id)arg3 frequency:(unsigned long long)arg4 ;
@end

