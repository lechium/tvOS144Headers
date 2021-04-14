/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, NSArray, HMUserActionPrediction;


@protocol HMDUserActionPredictionGroup <NSObject>
@property (copy,readonly) NSUUID * groupUUID; 
@property (readonly) double predictionScore; 
@property (copy,readonly) NSArray * predictions; 
@property (copy,readonly) HMUserActionPrediction * userActionRepresentation; 
@required
-(NSArray *)predictions;
-(NSUUID *)groupUUID;
-(double)predictionScore;
-(HMUserActionPrediction *)userActionRepresentation;
-(void)updateWithPrediction:(id)arg1;
-(BOOL)containsPrediction:(id)arg1;
-(BOOL)shouldContainPrediction:(id)arg1;

@end
