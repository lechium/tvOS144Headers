/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PLAssetsdClient;

@interface PLGatekeeperClient : NSObject {

	PLAssetsdClient* _assetsdClient;

}
+(id)sharedInstance;
-(void)getLibrarySizes:(/*^block*/id)arg1 ;
-(void)getLibrarySizesFromDB:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
@end

