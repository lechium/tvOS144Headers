/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVContentPartnerKitUI/TVCKDataBaseItem.h>

@class NSMutableDictionary, TVCKDataClient, NSString;

@interface TVCKDataItem : NSObject <TVCKDataBaseItem> {

	NSMutableDictionary* _metadataDict;
	NSMutableDictionary* _mutatedDict;
	NSMutableDictionary* _transactionDict;
	TVCKDataClient* _dataClient;
	NSMutableDictionary* _playbackMetadataDict;

}

@property (retain) NSMutableDictionary * playbackMetadataDict;                   //@synthesize playbackMetadataDict=_playbackMetadataDict - In the implementation block
@property (retain) NSMutableDictionary * metadataDict;                           //@synthesize metadataDict=_metadataDict - In the implementation block
@property (retain) NSMutableDictionary * mutatedDict;                            //@synthesize mutatedDict=_mutatedDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transactionDict;              //@synthesize transactionDict=_transactionDict - In the implementation block
@property (__weak) TVCKDataClient * dataClient;                                  //@synthesize dataClient=_dataClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)objectForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)valueForProperty:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(NSMutableDictionary *)metadataDict;
-(void)setMetadataDict:(NSMutableDictionary *)arg1 ;
-(id)initWithDataClient:(id)arg1 ;
-(id)concreteValueForProperty:(id)arg1 ;
-(TVCKDataClient *)dataClient;
-(void)beginUpdateTransaction;
-(void)commitUpdateTransactionWithOptions:(id)arg1 ;
-(void)setDataClient:(TVCKDataClient *)arg1 ;
-(void)setValueWithoutTransaction:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)isDataItem;
-(NSMutableDictionary *)mutatedDict;
-(void)setTransactionDict:(NSMutableDictionary *)arg1 ;
-(void)setMutatedDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)transactionDict;
-(NSMutableDictionary *)playbackMetadataDict;
-(void)setPlaybackMetadataDict:(NSMutableDictionary *)arg1 ;
@end

