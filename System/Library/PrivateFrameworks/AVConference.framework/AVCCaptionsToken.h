/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface AVCCaptionsToken : NSObject {

	NSString* _text;
	double _confidence;
	BOOL _hasSpaceAfter;

}

@property (nonatomic,readonly) NSString * text;                 //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) double confidence;               //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) BOOL hasSpaceAfter;              //@synthesize hasSpaceAfter=_hasSpaceAfter - In the implementation block
-(id)description;
-(void)dealloc;
-(double)confidence;
-(NSString *)text;
-(BOOL)hasSpaceAfter;
-(id)initWithText:(id)arg1 confidence:(double)arg2 spaceAfter:(BOOL)arg3 ;
@end

