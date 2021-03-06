/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FeatureFlagsSupport.framework/FeatureFlagsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <FeatureFlagsSupport/FeatureFlagsSupport-Structs.h>
@class NSArray, NSMutableSet, NSMutableDictionary, NSSet;

@interface FFConfiguration : NSObject {

	os_unfair_lock_s lock;
	NSArray* searchPaths;
	NSMutableSet* _domains;
	NSMutableDictionary* configByLevel[2][4];
	NSMutableDictionary* metaByLevel[4];

}

@property (nonatomic,readonly) NSSet * domains; 
+(id)shared;
-(BOOL)reset:(id*)arg1 ;
-(void)invalidateCache;
-(NSSet *)domains;
-(BOOL)commitUpdates:(id*)arg1 ;
-(id)initPrivate;
-(void)validateName:(id)arg1 ;
-(id)stateForFeature:(id)arg1 domain:(id)arg2 level:(long long)arg3 ;
-(void)enableFeature:(id)arg1 domain:(id)arg2 level:(long long)arg3 ;
-(void)disableFeature:(id)arg1 domain:(id)arg2 level:(long long)arg3 ;
-(id)stateForFeature:(id)arg1 domain:(id)arg2 ;
-(void)clearCachedData;
-(BOOL)isValidName:(id)arg1 ;
-(id)fileURLForLevel:(long long)arg1 pathIndex:(int)arg2 ;
-(id)makeFeatureDictionaryFrom:(id)arg1 forDomain:(id)arg2 ;
-(id)fileURLForDomain:(id)arg1 pathIndex:(int)arg2 ;
-(void)addFeaturesForDomain:(id)arg1 pathIndex:(int)arg2 fromURL:(id)arg3 ;
-(void)loadCombinedDataForLevel:(long long)arg1 ;
-(void)loadDomain:(id)arg1 level:(long long)arg2 ;
-(id)effectiveStateForFeature:(id)arg1 domain:(id)arg2 level:(long long)arg3 ;
-(void)createMutableDomainConfig:(id)arg1 level:(long long)arg2 ;
-(void)loadAllData;
-(BOOL)isFeatureHidden:(id)arg1 domain:(id)arg2 ;
-(void)setValue:(long long)arg1 feature:(id)arg2 domain:(id)arg3 level:(long long)arg4 ;
-(BOOL)createDirectoryAtURL:(id)arg1 error:(id*)arg2 ;
-(void)populateDictionary:(id)arg1 withFeatures:(id)arg2 ;
-(BOOL)writeData:(id)arg1 toFile:(id)arg2 error:(id*)arg3 ;
-(void)loadAllLevelsForDomain:(id)arg1 ;
-(id)resolvedStateForFeature:(id)arg1 domain:(id)arg2 ;
-(void)setFeaturesMatchingAttribute:(id)arg1 level:(long long)arg2 value:(long long)arg3 ;
-(BOOL)writeDomainUpdates:(id*)arg1 ;
-(BOOL)writeCombinedUpdates:(id*)arg1 ;
-(id)featuresForDomain:(id)arg1 ;
-(id)defaultStateForFeature:(id)arg1 domain:(id)arg2 ;
-(void)enableFeaturesMatchingAttribute:(id)arg1 level:(long long)arg2 ;
-(void)disableFeaturesMatchingAttribute:(id)arg1 level:(long long)arg2 ;
-(void)unsetFeature:(id)arg1 domain:(id)arg2 level:(long long)arg3 ;
-(void)unsetFeaturesMatchingAttribute:(id)arg1 level:(long long)arg2 ;
-(BOOL)resetDomain:(id)arg1 error:(id*)arg2 ;
@end

