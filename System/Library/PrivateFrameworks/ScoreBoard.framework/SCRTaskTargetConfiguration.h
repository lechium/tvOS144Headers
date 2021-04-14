/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol SCRSyncTargetContextProvider, SCRAsyncTargetContextProvider;
@class NSString;

@interface SCRTaskTargetConfiguration : NSObject <NSCopying, BSDescriptionProviding> {

	NSString* _targetIdentifier;
	id<SCRSyncTargetContextProvider> _syncContextProvider;
	id<SCRAsyncTargetContextProvider> _asyncContextProvider;

}

@property (nonatomic,copy,readonly) NSString * targetIdentifier;                                    //@synthesize targetIdentifier=_targetIdentifier - In the implementation block
@property (nonatomic,readonly) id<SCRSyncTargetContextProvider> syncContextProvider;                //@synthesize syncContextProvider=_syncContextProvider - In the implementation block
@property (nonatomic,readonly) id<SCRAsyncTargetContextProvider> asyncContextProvider;              //@synthesize asyncContextProvider=_asyncContextProvider - In the implementation block
@property (nonatomic,readonly) id<SCRTargetContextProvider> contextProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(NSString *)targetIdentifier;
-(id<SCRTargetContextProvider>)contextProvider;
-(id)_initWithTarget:(id)arg1 syncProvider:(id)arg2 asyncProvider:(id)arg3 ;
-(void)_validateContext:(id)arg1 ;
-(id<SCRAsyncTargetContextProvider>)asyncContextProvider;
-(id<SCRSyncTargetContextProvider>)syncContextProvider;
-(void)invalidateTargetContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(Class)_expectedTargetContextClass;
-(id)_expectedTargetContextProtocol;
-(id)initWithTarget:(id)arg1 syncContextProvider:(id)arg2 ;
-(id)initWithTarget:(id)arg1 asyncContextProvider:(id)arg2 ;
-(void)createContextWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithTarget:(id)arg1 contextProvider:(id)arg2 ;
@end

