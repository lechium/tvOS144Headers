/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/_NSObservableObservation.h>

@class NSObservableKeyPath;

@interface _NSObservableKVO1Adaptor : _NSObservableObservation {

	NSObservableKeyPath* kp;
	BOOL emitsChanges;

}
-(BOOL)isEqual:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)remove;
-(void)finishObserving;
-(id)initWithObservable:(id)arg1 observer:(id)arg2 keyPath:(id)arg3 ;
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void*)arg7 ;
@end

