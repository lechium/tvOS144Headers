/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MSVSQLRowResult <NSObject>
@required
-(id)objectValueAtColumnIndex:(long long)arg1;
-(id)stringValueAtColumnIndex:(long long)arg1;
-(double)doubleValueAtColumnIndex:(long long)arg1;
-(long long)int64ValueAtColumnIndex:(long long)arg1;
-(id)dataValueAtColumnIndex:(long long)arg1;
-(BOOL)isNullValueAtColumnIndex:(long long)arg1;
-(BOOL)boolValueAtColumnIndex:(long long)arg1;
-(unsigned long long)uint64ValueAtColumnIndex:(long long)arg1;
-(float)floatValueAtColumnIndex:(long long)arg1;
-(id)dateValueAtColumnIndex:(long long)arg1;
-(id)jsonValueAtColumnIndex:(long long)arg1 error:(id*)arg2;

@end

