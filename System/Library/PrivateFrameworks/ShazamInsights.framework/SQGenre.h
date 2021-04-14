/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SQGenre : NSObject {

	float _score;
	NSString* _label;

}

@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) float score;                 //@synthesize score=_score - In the implementation block
+(id)genreWithLabel:(id)arg1 score:(float)arg2 ;
-(float)score;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setScore:(float)arg1 ;
@end

