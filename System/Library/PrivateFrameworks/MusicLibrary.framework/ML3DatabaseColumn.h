/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface ML3DatabaseColumn : NSObject {

	NSString* _name;
	unsigned long long _datatype;
	unsigned long long _columnConstraints;
	id _defaultValue;

}

@property (nonatomic,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long datatype;                       //@synthesize datatype=_datatype - In the implementation block
@property (nonatomic,readonly) unsigned long long columnConstraints;              //@synthesize columnConstraints=_columnConstraints - In the implementation block
@property (nonatomic,readonly) id defaultValue;                                   //@synthesize defaultValue=_defaultValue - In the implementation block
+(id)columnWithName:(id)arg1 datatype:(unsigned long long)arg2 constraints:(unsigned long long)arg3 defaultValue:(id)arg4 ;
-(NSString *)name;
-(id)description;
-(id)defaultValue;
-(id)initWithName:(id)arg1 datatype:(unsigned long long)arg2 constraints:(unsigned long long)arg3 defaultValue:(id)arg4 ;
-(id)_columnDefinitionSQL;
-(unsigned long long)datatype;
-(unsigned long long)columnConstraints;
@end

