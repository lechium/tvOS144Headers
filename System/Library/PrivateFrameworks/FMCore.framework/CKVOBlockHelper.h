/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface CKVOBlockHelper : NSObject {

	id _observedObject;
	NSMutableDictionary* _tokensByContext;
	long long _nextIdentifier;

}

@property (nonatomic,__weak,readonly) id observedObject;                           //@synthesize observedObject=_observedObject - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * tokensByContext;              //@synthesize tokensByContext=_tokensByContext - In the implementation block
@property (assign,nonatomic) long long nextIdentifier;                             //@synthesize nextIdentifier=_nextIdentifier - In the implementation block
-(id)debugDescription;
-(void)dealloc;
-(id)initWithObject:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)dump;
-(void)removeHandlerForKey:(id)arg1 ;
-(id)observedObject;
-(id)insertNewTokenForKeyPath:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)allKVOObservers;
-(NSMutableDictionary *)tokensByContext;
-(long long)nextIdentifier;
-(void)setNextIdentifier:(long long)arg1 ;
@end
