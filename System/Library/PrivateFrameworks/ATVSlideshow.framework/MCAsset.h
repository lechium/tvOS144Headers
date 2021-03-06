/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MCObject.h>

@class NSMutableSet, NSString;

@interface MCAsset : MCObject {

	NSMutableSet* mTexts;
	NSString* mPath;

}

@property (copy) NSString * path; 
@property (nonatomic,readonly) BOOL isInUse; 
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(BOOL)isInUse;
-(void)demolish;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)learnText:(id)arg1 ;
-(void)forgetText:(id)arg1 ;
@end

