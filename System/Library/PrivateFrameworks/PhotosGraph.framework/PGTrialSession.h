/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TRIClient;

@interface PGTrialSession : NSObject {

	TRIClient* _trialClient;

}

@property (nonatomic,retain) TRIClient * trialClient;              //@synthesize trialClient=_trialClient - In the implementation block
+(id)newTrialSession;
-(id)init;
-(TRIClient *)trialClient;
-(id)levelForFactorName:(id)arg1 withNamespaceType:(unsigned short)arg2 ;
-(id)dictionaryForFactorName:(id)arg1 withNamespaceType:(unsigned short)arg2 ;
-(id)_namespaceNameForNamespaceType:(unsigned short)arg1 ;
-(void)setTrialClient:(TRIClient *)arg1 ;
@end

