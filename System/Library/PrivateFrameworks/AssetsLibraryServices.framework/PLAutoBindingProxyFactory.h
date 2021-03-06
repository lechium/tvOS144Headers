/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLXPCProxyCreating.h>

@protocol PLXPCProxyCreating;
@class PLLazyObject, PLResult, NSURL, NSString;

@interface PLAutoBindingProxyFactory : NSObject <PLXPCProxyCreating> {

	os_unfair_lock_s _bindLock;
	PLLazyObject* _lazyBindToPhotoLibrary;
	PLResult* _cachedBindResult;
	id<PLXPCProxyCreating> _proxyFactory;
	NSURL* _photoLibraryURL;

}

@property (readonly) id<PLXPCProxyCreating> proxyFactory;              //@synthesize proxyFactory=_proxyFactory - In the implementation block
@property (copy,readonly) NSURL * photoLibraryURL;                     //@synthesize photoLibraryURL=_photoLibraryURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientToServiceSandboxExtensionForURL:(id)arg1 ;
+(unsigned long long)maxBindAttemptCount;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_unboostingRemoteObjectProxy;
-(void)addBarrierBlock:(/*^block*/id)arg1 ;
-(void)_connectionInterrupted:(id)arg1 ;
-(id<PLXPCProxyCreating>)proxyFactory;
-(id)_cachedBindResult;
-(id)initWithProxyFactory:(id)arg1 photoLibraryURL:(id)arg2 ;
-(id)_blackholeProxyForProxy:(id)arg1 ;
-(BOOL)_bindToPhotoLibraryIfNecessaryWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_bindToPhotoLibraryIfNecessary;
-(id)_bindToPhotoLibraryAndCacheResult;
-(void)_updateCachedBindResult:(id)arg1 ;
-(id)_lazilyBindToPhotoLibrary;
-(id)_bindToPhotoLibrary;
-(id)_attemptBindToPhotoLibrary;
-(BOOL)_isResultAnInterruptionError:(id)arg1 ;
-(NSURL *)photoLibraryURL;
@end

