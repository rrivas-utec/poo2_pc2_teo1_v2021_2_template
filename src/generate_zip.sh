#!/usr/bin/env bash

project_name='poo2_pc2_teo1_v2021_2'
source_code='
        P1.h P1.cpp
        P2.h P2.cpp
        P3.h P3.cpp
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}