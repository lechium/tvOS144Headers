/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Speech.framework/Speech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Speech/Speech-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, SFTranscription;

@interface SFSpeechRecognitionResult : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _transcriptions;
	NSArray* _rawTranscriptions;
	BOOL _final;
	SFTranscription* _bestTranscription;
	SFTranscription* _rawTranscription;

}

@property (nonatomic,copy,readonly) SFTranscription * rawTranscription;               //@synthesize rawTranscription=_rawTranscription - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rawTranscriptions; 
@property (nonatomic,copy,readonly) SFTranscription * bestTranscription;              //@synthesize bestTranscription=_bestTranscription - In the implementation block
@property (nonatomic,copy,readonly) NSArray * transcriptions; 
@property (getter=isFinal,nonatomic,readonly) BOOL final;                             //@synthesize final=_final - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isFinal;
-(SFTranscription *)rawTranscription;
-(SFTranscription *)bestTranscription;
-(NSArray *)transcriptions;
-(id)_initWithBestTranscription:(id)arg1 rawTranscription:(id)arg2 final:(BOOL)arg3 ;
-(id)expandTranscription:(id)arg1 ;
-(id)_initWithBestTranscription:(id)arg1 final:(BOOL)arg2 ;
-(NSArray *)rawTranscriptions;
@end
