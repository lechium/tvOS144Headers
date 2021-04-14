/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableDictionary;

@interface _TVAssetGroup : NSObject {

	BOOL _manifestDirty;
	long long _groupType;
	NSString* _cachePath;
	unsigned long long _maxCacheSize;
	unsigned long long _pruneCount;
	unsigned long long _currentCacheSize;
	NSMutableDictionary* _cacheRecords;
	NSMutableDictionary* _assetKeysByTag;
	NSMutableDictionary* _manifest;

}

@property (assign,nonatomic) long long groupType;                                    //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,retain) NSString * cachePath;                                   //@synthesize cachePath=_cachePath - In the implementation block
@property (assign,nonatomic) unsigned long long maxCacheSize;                        //@synthesize maxCacheSize=_maxCacheSize - In the implementation block
@property (assign,nonatomic) unsigned long long currentCacheSize;                    //@synthesize currentCacheSize=_currentCacheSize - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cacheRecords;                     //@synthesize cacheRecords=_cacheRecords - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetKeysByTag;                   //@synthesize assetKeysByTag=_assetKeysByTag - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * manifest;                         //@synthesize manifest=_manifest - In the implementation block
@property (assign,getter=isManifestDirty,nonatomic) BOOL manifestDirty;              //@synthesize manifestDirty=_manifestDirty - In the implementation block
@property (assign,nonatomic) unsigned long long pruneCount;                          //@synthesize pruneCount=_pruneCount - In the implementation block
+(id)_humanReadableStringForGroupType:(long long)arg1 ;
-(id)description;
-(NSMutableDictionary *)manifest;
-(void)setManifest:(NSMutableDictionary *)arg1 ;
-(long long)groupType;
-(void)setGroupType:(long long)arg1 ;
-(NSString *)cachePath;
-(void)setCachePath:(NSString *)arg1 ;
-(void)updateAssetsFromFiles;
-(void)_removeAssetInfoForKey:(id)arg1 removeFile:(BOOL)arg2 ;
-(void)_updateManifestWithChange:(/*^block*/id)arg1 ;
-(void)_removeAssetInfoForKey:(id)arg1 ;
-(id)_manifestFilePath;
-(BOOL)isManifestDirty;
-(void)setManifestDirty:(BOOL)arg1 ;
-(void)_saveManifest;
-(id)initWithGroupType:(long long)arg1 baseCachePath:(id)arg2 folderName:(id)arg3 maxCacheSize:(unsigned long long)arg4 purgeOnLoad:(BOOL)arg5 ;
-(void)setAssetInfo:(id)arg1 forKey:(id)arg2 queue:(id)arg3 ;
-(id)assetInfoForKey:(id)arg1 queue:(id)arg2 ;
-(void)removeAssetInfoForKey:(id)arg1 queue:(id)arg2 ;
-(void)removeAllAssetsWithQueue:(id)arg1 ;
-(id)infoForAllAssetsWithQueue:(id)arg1 ;
-(id)infoForAllAssetsWithTags:(id)arg1 queue:(id)arg2 ;
-(unsigned long long)maxCacheSize;
-(void)setMaxCacheSize:(unsigned long long)arg1 ;
-(unsigned long long)pruneCount;
-(void)setPruneCount:(unsigned long long)arg1 ;
-(unsigned long long)currentCacheSize;
-(void)setCurrentCacheSize:(unsigned long long)arg1 ;
-(NSMutableDictionary *)cacheRecords;
-(void)setCacheRecords:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)assetKeysByTag;
-(void)setAssetKeysByTag:(NSMutableDictionary *)arg1 ;
@end

