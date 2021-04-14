/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FBSDisplayLayoutElement.h>
#import <libobjc.A.dylib/SBSDisplayLayoutElement.h>

@protocol SBSDisplayLayoutElement <NSObject>
@property (getter=isSpringBoardElement,nonatomic,readonly) BOOL springBoardElement; 
@property (nonatomic,readonly) long long layoutRole; 
@property (getter=sb_isTransitioning,nonatomic,readonly) BOOL sb_transitioning; 
@required
-(long long)layoutRole;
-(BOOL)sb_isTransitioning;
-(BOOL)isSpringBoardElement;

@end


@class NSString;

@interface SBSDisplayLayoutElement : FBSDisplayLayoutElement <SBSDisplayLayoutElement>

@property (assign,nonatomic) long long layoutRole; 
@property (assign,setter=sb_setTransitioning:,getter=sb_isTransitioning,nonatomic) BOOL sb_transitioning; 
@property (getter=isSpringBoardElement,nonatomic,readonly) BOOL springBoardElement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescriptionBuilder;
-(long long)layoutRole;
-(void)setLayoutRole:(long long)arg1 ;
-(BOOL)sb_isTransitioning;
-(BOOL)isSpringBoardElement;
-(id)initWithIdentifier:(id)arg1 layoutRole:(long long)arg2 ;
-(void)sb_setTransitioning:(BOOL)arg1 ;
@end

