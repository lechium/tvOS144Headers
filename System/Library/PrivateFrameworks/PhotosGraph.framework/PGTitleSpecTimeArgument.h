/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGTitleSpecArgument.h>

@interface PGTitleSpecTimeArgument : PGTitleSpecArgument {

	unsigned long long _type;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)argumentWithTimeType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)_resolvedStringWithMomentNodes:(id)arg1 ;
-(id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2 ;
-(id)_birthdayTitleWithMomentNodes:(id)arg1 ;
-(id)initWithTimeType:(unsigned long long)arg1 ;
-(id)_yearsAgoTitle;
-(id)_anniversaryTitleWithMomentNodes:(id)arg1 ;
-(id)_yearsAgoStringWithEventNodes:(id)arg1 relativeToDateComponents:(id)arg2 ;
-(id)_holidayTitleWithMomentNodes:(id)arg1 ;
@end

