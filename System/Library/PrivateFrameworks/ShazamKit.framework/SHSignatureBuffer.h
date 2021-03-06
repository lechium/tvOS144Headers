/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, SHSignature;

@interface SHSignatureBuffer : NSObject {

	long long _qos;
	double _maximumSignatureLength;
	NSMutableArray* _allSignatures;

}

@property (assign,nonatomic) double maximumSignatureLength;               //@synthesize maximumSignatureLength=_maximumSignatureLength - In the implementation block
@property (nonatomic,retain) NSMutableArray * allSignatures;              //@synthesize allSignatures=_allSignatures - In the implementation block
@property (nonatomic,readonly) SHSignature * nextSignature; 
@property (nonatomic,readonly) long long qos;                             //@synthesize qos=_qos - In the implementation block
-(double)length;
-(long long)qos;
-(double)maximumSignatureLength;
-(id)initWithMaximumSignatureLength:(double)arg1 qos:(long long)arg2 ;
-(void)flow:(id)arg1 time:(id)arg2 ;
-(void)finishedMatchingSignatureWithID:(id)arg1 ;
-(SHSignature *)nextSignature;
-(void)setMaximumSignatureLength:(double)arg1 ;
-(NSMutableArray *)allSignatures;
-(BOOL)checkFlowError:(id)arg1 ;
-(void)discardOldestSignatureWithID:(id)arg1 ;
-(void)discardAllSignaturesExceptTheLatestAfterMatchingID:(id)arg1 ;
-(void)setAllSignatures:(NSMutableArray *)arg1 ;
@end

