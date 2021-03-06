/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVCallbackContextRegistry;

@interface AVKVODispatcher : NSObject {

	AVCallbackContextRegistry* _callbackContextRegistry;

}
+(id)sharedKVODispatcher;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)startObservingValueAtKeyPath:(id)arg1 ofObject:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)startObservingObject:(id)arg1 weakObserver:(id)arg2 forTwoPartKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void*)arg5 ;
-(id)startObservingObject:(id)arg1 weakObserver:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void*)arg5 ;
-(id)initWithDescriptionOfHowAllObservedPropertyChangesAreSerializedWithDispatcherDeallocation:(id)arg1 ;
-(id)startObservingValueAtTwoPartKeyPath:(id)arg1 ofObject:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)startObservingValueAtKeyPath:(id)arg1 withoutKeepingAliveObservedObject:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
@end

