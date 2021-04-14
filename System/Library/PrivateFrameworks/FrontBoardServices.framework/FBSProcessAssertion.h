/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSProcess;
@class NSString, FBSProcessExecutionPolicy, BKSProcessAssertion;

@interface FBSProcessAssertion : NSObject <BSDescriptionProviding> {

	NSString* _name;
	id<FBSProcess> _process;
	FBSProcessExecutionPolicy* _policy;
	unsigned long long _activationCount;
	BOOL _invalidated;
	BKSProcessAssertion* _assertion;

}

@property (nonatomic,readonly) BKSProcessAssertion * assertion;                    //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,readonly) unsigned long long activationCount;                 //@synthesize activationCount=_activationCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,__weak,readonly) id<FBSProcess> process;                      //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) FBSProcessExecutionPolicy * policy;                 //@synthesize policy=_policy - In the implementation block
@property (getter=isActivated,nonatomic,readonly) BOOL activated; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;              //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSString *)description;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isInvalidated;
-(void)activate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id<FBSProcess>)process;
-(void)deactivate;
-(id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3 ;
-(FBSProcessExecutionPolicy *)policy;
-(BOOL)isActivated;
-(unsigned long long)activationCount;
-(BKSProcessAssertion *)assertion;
@end

