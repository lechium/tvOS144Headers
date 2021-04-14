/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/libfaceCore.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	CGPoint center;
	CGRect bounds;
} SCD_Struct_Fa3;

typedef struct _compressed_pair<apple::vision::libraries::facecore::FaceCoreAPI *, std::__1::default_delete<apple::vision::libraries::facecore::FaceCoreAPI> > {
	FaceCoreAPI __value_;
} compressed_pair<apple::vision::libraries::facecore::FaceCoreAPI *, std::__1::default_delete<apple::vision::libraries::facecore::FaceCoreAPI> >;

typedef struct unique_ptr<apple::vision::libraries::facecore::FaceCoreAPI, std::__1::default_delete<apple::vision::libraries::facecore::FaceCoreAPI> > {
	compressed_pair<apple::vision::libraries::facecore::FaceCoreAPI *, std::__1::default_delete<apple::vision::libraries::facecore::FaceCoreAPI> > __ptr_;
} unique_ptr<apple::vision::libraries::facecore::FaceCoreAPI, std::__1::default_delete<apple::vision::libraries::facecore::FaceCoreAPI> >;

typedef struct CGImage* CGImageRef;

typedef struct __CVBuffer* CVBufferRef;

