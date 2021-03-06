/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MSVideoDerivativeSpecification : NSObject {

	BOOL _useCellular;
	BOOL _powerRequired;
	double _bitRate;
	NSString* _videoType;
	unsigned long long _mediaAssetType;

}

@property (nonatomic,readonly) BOOL useCellular;                               //@synthesize useCellular=_useCellular - In the implementation block
@property (nonatomic,readonly) BOOL powerRequired;                             //@synthesize powerRequired=_powerRequired - In the implementation block
@property (nonatomic,readonly) double bitRate;                                 //@synthesize bitRate=_bitRate - In the implementation block
@property (nonatomic,readonly) NSString * videoType;                           //@synthesize videoType=_videoType - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaAssetType;              //@synthesize mediaAssetType=_mediaAssetType - In the implementation block
+(id)videoDerivativeSpecificationsWithDictionaryArray:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(double)bitRate;
-(unsigned long long)mediaAssetType;
-(BOOL)useCellular;
-(BOOL)powerRequired;
-(NSString *)videoType;
@end

