/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SUCoreFSMAttachedAction : NSObject {

	NSString* _fsmAction;
	id _actionDelegate;
	Class _eventInfoClass;

}

@property (nonatomic,retain,readonly) NSString * fsmAction;              //@synthesize fsmAction=_fsmAction - In the implementation block
@property (nonatomic,__weak,readonly) id actionDelegate;                 //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (nonatomic,retain,readonly) Class eventInfoClass;              //@synthesize eventInfoClass=_eventInfoClass - In the implementation block
-(id)description;
-(id)actionDelegate;
-(NSString *)fsmAction;
-(Class)eventInfoClass;
-(id)initWithAction:(id)arg1 usingDelegate:(id)arg2 withInfoClass:(Class)arg3 ;
@end

