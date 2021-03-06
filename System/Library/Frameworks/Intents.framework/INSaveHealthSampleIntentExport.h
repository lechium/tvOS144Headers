/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INDateComponentsRange, NSArray, HKUnit;


@protocol INSaveHealthSampleIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INDateComponentsRange * recordDate; 
@property (assign,nonatomic) long long objectType; 
@property (nonatomic,copy) NSArray * values; 
@property (nonatomic,copy) HKUnit * unit; 
@property (nonatomic,copy) NSArray * sampleMetadatas; 
@required
-(id)init;
-(NSArray *)values;
-(HKUnit *)unit;
-(void)setValues:(id)arg1;
-(INDateComponentsRange *)recordDate;
-(void)setRecordDate:(id)arg1;
-(long long)objectType;
-(void)setObjectType:(long long)arg1;
-(void)setUnit:(id)arg1;
-(NSArray *)sampleMetadatas;
-(void)setSampleMetadatas:(id)arg1;

@end

