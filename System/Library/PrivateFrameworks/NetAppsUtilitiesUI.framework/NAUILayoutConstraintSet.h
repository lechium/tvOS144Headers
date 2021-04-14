/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIView, NSArray;

@interface NAUILayoutConstraintSet : NSObject {

	UIView* _owningView;
	/*^block*/id _builder;
	NSArray* _constraints;

}

@property (nonatomic,copy) NSArray * constraints;                        //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,__weak,readonly) UIView * owningView;               //@synthesize owningView=_owningView - In the implementation block
@property (nonatomic,copy,readonly) id builder;                          //@synthesize builder=_builder - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
-(void)invalidate;
-(BOOL)isActive;
-(id)builder;
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(UIView *)owningView;
-(id)initWithOwningView:(id)arg1 constraintBuilder:(/*^block*/id)arg2 ;
-(void)activateIfNeeded;
-(void)updateConstraintConstants;
@end
