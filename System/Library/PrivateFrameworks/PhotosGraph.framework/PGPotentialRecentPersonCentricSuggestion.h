/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray, NSDate;

@interface PGPotentialRecentPersonCentricSuggestion : NSObject {

	NSString* _personLocalIdentifier;
	NSArray* _assets;
	NSDate* _notSeenSinceDate;
	unsigned long long _relationshipScore;

}

@property (nonatomic,readonly) NSString * personLocalIdentifier;                  //@synthesize personLocalIdentifier=_personLocalIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * assets;                                  //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) NSDate * notSeenSinceDate;                         //@synthesize notSeenSinceDate=_notSeenSinceDate - In the implementation block
@property (nonatomic,readonly) unsigned long long relationshipScore;              //@synthesize relationshipScore=_relationshipScore - In the implementation block
-(NSArray *)assets;
-(NSString *)personLocalIdentifier;
-(NSDate *)notSeenSinceDate;
-(id)initWithPersonLocalIdentifier:(id)arg1 assets:(id)arg2 relationshipScore:(unsigned long long)arg3 ;
-(id)initWithPersonLocalIdentifier:(id)arg1 assets:(id)arg2 notSeenSinceDate:(id)arg3 ;
-(unsigned long long)relationshipScore;
@end

