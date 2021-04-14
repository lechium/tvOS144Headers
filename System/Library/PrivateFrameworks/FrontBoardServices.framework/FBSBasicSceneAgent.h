/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FBSSceneAgent.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSSceneHandle;
@class NSString;

@interface FBSBasicSceneAgent : NSObject <FBSSceneAgent, BSDescriptionProviding> {

	id<FBSSceneHandle> _scene;

}

@property (nonatomic,__weak,readonly) id<FBSSceneHandle> scene;              //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)scene:(id)arg1 reviewEvent:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_configureWithScene:(id)arg1 ;
-(id<FBSSceneHandle>)scene;
-(void)didReceiveMessage:(id)arg1 fromCounterpartAgent:(id)arg2 withResponseSender:(/*^block*/id)arg3 ;
@end

