/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface CFMorphunAssetsManager : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	NSMutableDictionary* _assetPaths;

}
+(id)sharedMorphunAssetsManager;
-(id)init;
-(id)_getNewMorphunPathForLanguage:(id)arg1 ;
-(id)replaceLanguageCodeFormat:(id)arg1 ;
-(id)morphunAssetsVersion:(id)arg1 forLanguage:(id)arg2 ;
-(id)morphunAssetsPathForLanguage:(id)arg1 ;
-(void)downloadMorphunAssetsForLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerPath:(id)arg1 withLanguage:(id)arg2 ;
@end

