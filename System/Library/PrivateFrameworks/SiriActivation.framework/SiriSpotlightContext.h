/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriActivation/SiriContext.h>

@class NSString;

@interface SiriSpotlightContext : SiriContext {

	NSString* _utteranceText;
	long long _source;

}

@property (nonatomic,copy) NSString * utteranceText;              //@synthesize utteranceText=_utteranceText - In the implementation block
@property (assign,nonatomic) long long source;                    //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)source;
-(void)setSource:(long long)arg1 ;
-(NSString *)utteranceText;
-(void)setUtteranceText:(NSString *)arg1 ;
@end

