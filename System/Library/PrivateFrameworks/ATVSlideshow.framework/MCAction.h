/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MCObjectLight.h>

@class NSString;

@interface MCAction : MCObjectLight {

	unsigned _flags;
	NSString* _targetObjectID;

}

@property (copy) NSString * targetObjectID;                    //@synthesize targetObjectID=_targetObjectID - In the implementation block
@property (assign,nonatomic) BOOL tracksInParent; 
-(id)description;
-(id)snapshot;
-(BOOL)isSnapshot;
-(void)setTargetObjectID:(NSString *)arg1 ;
-(void)demolish;
-(NSString *)targetObjectID;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(BOOL)tracksInParent;
-(void)setTracksInParent:(BOOL)arg1 ;
@end

