/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableOrderedSet;

@interface PLClientSandboxExtensionCache : NSObject {

	os_unfair_lock_s _lock;
	unsigned long long _cacheLimit;
	NSMutableOrderedSet* _sandboxExtensionURLs;

}

@property (nonatomic,retain) NSMutableOrderedSet * sandboxExtensionURLs;              //@synthesize sandboxExtensionURLs=_sandboxExtensionURLs - In the implementation block
@property (nonatomic,readonly) unsigned long long cacheLimit;                         //@synthesize cacheLimit=_cacheLimit - In the implementation block
-(BOOL)containsURL:(id)arg1 ;
-(id)initWithCacheLimit:(unsigned long long)arg1 ;
-(void)insertSandboxedURL:(id)arg1 ;
-(BOOL)containsPath:(id)arg1 ;
-(unsigned long long)cacheLimit;
-(NSMutableOrderedSet *)sandboxExtensionURLs;
-(void)setSandboxExtensionURLs:(NSMutableOrderedSet *)arg1 ;
@end

