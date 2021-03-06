/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SVXSpeechSynthesisUtteranceInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _utterance;
	NSArray* _wordTimings;

}

@property (nonatomic,copy,readonly) NSString * utterance;               //@synthesize utterance=_utterance - In the implementation block
@property (nonatomic,copy,readonly) NSArray * wordTimings;              //@synthesize wordTimings=_wordTimings - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSString *)utterance;
-(NSArray *)wordTimings;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithUtterance:(id)arg1 wordTimings:(id)arg2 ;
@end

