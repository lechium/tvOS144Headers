/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ETTaskContext
@required
-(BOOL)setTensorNamed:(id)arg1 withValue:(id)arg2 error:(id*)arg3;
-(id)getTensorNamed:(id)arg1;
-(id)doInferenceOnData:(id)arg1 error:(id*)arg2;
-(BOOL)saveNetwork:(id)arg1 inplace:(BOOL)arg2 error:(id*)arg3;

@end

