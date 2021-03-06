/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IMManualUpdater : NSObject {

	id _target;
	SEL _action;
	unsigned _needsUpdate : 1;

}

@property (assign,nonatomic,__weak) id target;              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate; 
-(id)description;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(BOOL)needsUpdate;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(void)setNeedsUpdate;
-(void)updateIfNeeded;
@end

