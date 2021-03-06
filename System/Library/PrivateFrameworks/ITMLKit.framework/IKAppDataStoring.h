/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IKAppDataStoring <NSObject>
@optional
-(id)dictionaryRepresentation;

@required
-(unsigned long long)count;
-(id)keyAtIndex:(unsigned long long)arg1;
-(void)clear;
-(unsigned long long)setData:(id)arg1 forKey:(id)arg2;
-(void)removeDataForKey:(id)arg1;
-(id)getDataForKey:(id)arg1;

@end

