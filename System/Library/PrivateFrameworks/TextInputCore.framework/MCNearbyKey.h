/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MCNearbyKey : NSObject {

	unsigned short _character;
	float _logLikelihood;

}

@property (nonatomic,readonly) unsigned short character;              //@synthesize character=_character - In the implementation block
@property (nonatomic,readonly) float logLikelihood;                   //@synthesize logLikelihood=_logLikelihood - In the implementation block
-(float)logLikelihood;
-(id)initWithCharacter:(unsigned short)arg1 logLikelihood:(float)arg2 ;
-(unsigned short)character;
@end

