/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBSDisplayLayoutElement <NSObject>
@property (getter=isSpringBoardElement,nonatomic,readonly) BOOL springBoardElement; 
@property (nonatomic,readonly) long long layoutRole; 
@property (getter=sb_isTransitioning,nonatomic,readonly) BOOL sb_transitioning; 
@required
-(long long)layoutRole;
-(BOOL)sb_isTransitioning;
-(BOOL)isSpringBoardElement;

@end

