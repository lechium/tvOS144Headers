/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, PLPhotoLibraryPathManager, PLLazyObject;

@interface PLEmailAddressManager : NSObject {

	NSMutableDictionary* _keysForEmails;
	NSMutableDictionary* _emailsForKey;
	int _maxKey;
	PLPhotoLibraryPathManager* _pathManager;
	PLLazyObject* _lazyAssetsdClient;

}
-(id)assetsdClient;
-(id)emailAddressForKey:(id)arg1 ;
-(id)keyForEmailAddress:(id)arg1 ;
-(id)initWithPathManager:(id)arg1 lazyAssetsdClient:(id)arg2 ;
-(id)plistPath;
-(void)_loadDictionariesIfNeeded;
@end

