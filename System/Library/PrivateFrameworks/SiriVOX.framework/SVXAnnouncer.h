/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SiriVOX/SiriVOX-Structs.h>
@class NSHashTable;

@interface SVXAnnouncer : NSObject {

	CFDictionaryRef _protocolRequiredInstanceMethodSignaturesBySelector;
	CFDictionaryRef _protocolOptionalInstanceMethodSignaturesBySelector;
	NSHashTable* _listeners;

}
+(id)protocol;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)removeAllListeners;
-(void)_accessListenersUsingBlock:(/*^block*/id)arg1 ;
@end

